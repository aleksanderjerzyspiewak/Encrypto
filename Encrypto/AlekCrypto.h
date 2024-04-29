#ifndef ALEK_CRYPTO_H
#define ALEK_CRYPTO_H

#include <string>
#include <iostream>
#include <fcntl.h>
#include <io.h>
#include <random>
#include <limits>
#include <ctime>

class AlekCrypto {
public:
    static wchar_t changeWchar(wchar_t wc, int shift) {
        return static_cast<wchar_t>(wc + shift);
    }

    std::wstring caesar(const std::wstring& data, int shift) {
        std::wstring newData;
        for (wchar_t wc : data) {
            newData.push_back(changeWchar(wc, shift));
        }
        return newData;
    }
    std::wstring caesarDec(const std::wstring& data, int shift) {
        std::wstring newData;
        for (wchar_t wc : data) {
            newData.push_back(changeWchar(wc, shift * -1));
        }
        return newData;
    }
    static std::wstring caesarSliding(const std::wstring& data, const std::wstring& password) {
        std::wstring buffer = password;
        std::wstring newData;
        for (wchar_t wc : data) {
            wchar_t newChar = changeWchar(wc, int(buffer[0]));
            newData.push_back(newChar);
            buffer.erase(0, 1);
            buffer += wc;
        }
        return newData;
    }
    static std::wstring caesarSlidingDec(const std::wstring& data, const std::wstring& password) {
        std::wstring buffer = password;
        std::wstring newData;
        for (wchar_t wc : data) {
            wchar_t newChar = changeWchar(wc, -1 * int(buffer[0]));
            newData.push_back(newChar);
            buffer.erase(0, 1);
            buffer += newChar;
        }
        return newData;
    }

    std::wstring generateKey(const int& length) {
        std::random_device rd;
        std::mt19937 generator(rd());
        std::uniform_int_distribution<unsigned short> distribution(
            std::numeric_limits<unsigned short>::min(),
            std::numeric_limits<unsigned short>::max()
        );
        std::wstring result;
        result.reserve(length);

        for (int i = 0; i < length; ++i) {
            result.push_back(static_cast<wchar_t>(distribution(generator)));
        }

        return result;
    }


    std::wstring encrypt(const std::wstring& text, const std::wstring& password, const std::wstring& key) {
        if (password.empty() || key.empty()) {
            throw std::invalid_argument("Password and key cannot be empty");
        }

        std::wstring mixedText;
        mixedText.reserve(text.length());

        // Mix text with password
        for (size_t i = 0; i < text.length(); ++i) {
            wchar_t mixedChar = text[i] ^ password[i % password.length()];
            mixedText.push_back(mixedChar);
        }

        std::wstring encrypted;
        encrypted.reserve(mixedText.length());

        // Encrypt mixed text with key
        for (size_t i = 0; i < mixedText.length(); ++i) {
            wchar_t encryptedChar = mixedText[i] ^ key[i % key.length()];
            encrypted.push_back(encryptedChar);
        }

        return encrypted;
    }

    std::wstring decrypt(const std::wstring& encryptedText, const std::wstring& password, const std::wstring& key) {
        if (password.empty() || key.empty()) {
            throw std::invalid_argument("Password and key cannot be empty");
        }

        std::wstring mixedText;
        mixedText.reserve(encryptedText.length());

        // Decrypt encrypted text to get mixed text
        for (size_t i = 0; i < encryptedText.length(); ++i) {
            wchar_t mixedChar = encryptedText[i] ^ key[i % key.length()];
            mixedText.push_back(mixedChar);
        }

        std::wstring decrypted;
        decrypted.reserve(mixedText.length());

        // Demix mixed text with password
        for (size_t i = 0; i < mixedText.length(); ++i) {
            wchar_t decryptedChar = mixedText[i] ^ password[i % password.length()];
            decrypted.push_back(decryptedChar);
        }

        return decrypted;
    }
    std::wstring xorEncryptDecrypt(const std::wstring& data, const std::wstring& password) {
        if (password.empty()) {
            throw std::invalid_argument("Password cannot be empty");
        }

        // Seed generator based on the password
        std::seed_seq seed(password.begin(), password.end());
        std::mt19937 generator(seed);
        std::uniform_int_distribution<int> distribution(0, 65535); // Range for wchar_t values

        std::wstring result(data);

        for (size_t i = 0; i < data.size(); ++i) {
            result[i] = data[i] ^ distribution(generator);  // XOR each character with a pseudo-random value
        }

        return result;
    }

};

#endif