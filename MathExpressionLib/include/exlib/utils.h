#pragma once

#include <string>


bool is_operator(const char c);
bool is_digit(const char c);
bool is_signed_number(const char c);
bool is_alphabit(const char c);
bool is_lowercase(const char c);
bool is_uppercase(const char c);

int char_to_digit(const char c);
char char_to_lowercase(const char c);
char char_to_uppercase(const char c);

std::string str_to_lowercase(const std::string& str);
std::string str_to_uppercase(const std::string& str);

