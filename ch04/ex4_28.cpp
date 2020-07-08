/**
 * @file ex4_28.cpp
 * @brief 
 * @author dingqunfei (dqflying@gmail.com)
 * @version 1.0
 * @date 2020-07-08
 * 
 * @copyright Copyright (c) 2020 DQFLYING
 * 
 * @par :
 * 
 * 
 * Date        : 2020-07-08
 * Version     : 1.0
 * Author      : dqflying
 * Lisence     : 
 * Description : 
 * 
 * 
 * 
 * 
 */

#include <iostream>
#include <vector>
#include <string>

int main(int argc, char **argv)
{
    std::cout << "nullptr size: " << sizeof(nullptr) << " bytes" << std::endl;
    std::cout << "int* ptr size: " << sizeof(int *) << " bytes" << std::endl;
    std::cout << "char* ptr size: " << sizeof(char *) << " bytes" << std::endl;
    std::cout << "double* ptr size: " << sizeof(double *) << " bytes" << std::endl;
    std::cout << "float* ptr size: " << sizeof(float *) << " bytes" << std::endl;

    std::cout << "bool size: " << sizeof(bool) << " bytes" << std::endl;

    std::cout << "char size: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t size: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t size: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t size: " << sizeof(char32_t) << " bytes" << std::endl;

    std::cout << "short size: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "int size: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "long size: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long size: " << sizeof(long long) << " bytes" << std::endl;

    std::cout << "float size: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double size: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "long double size: " << sizeof(long double) << " bytes" << std::endl;

    std::cout << "uint8_t size: " << sizeof(uint8_t) << " bytes" << std::endl;
    std::cout << "int8_t size: " << sizeof(int8_t) << " bytes" << std::endl;
    std::cout << "uint16_t size: " << sizeof(uint16_t) << " bytes" << std::endl;
    std::cout << "int16_t size: " << sizeof(int16_t) << " bytes" << std::endl;
    std::cout << "uint32_t size: " << sizeof(uint32_t) << " bytes" << std::endl;
    std::cout << "int32_t size: " << sizeof(int32_t) << " bytes" << std::endl;
    std::cout << "uint64_t size: " << sizeof(uint64_t) << " bytes" << std::endl;
    std::cout << "int64_t size: " << sizeof(int64_t) << " bytes" << std::endl;

    return 0;
}