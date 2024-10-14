/*
Copyright (C) 2024 我不精通C语言

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3.0 of the License, or
(at your option) any later version.

*/

#include "TdPr-dev"

int main(int argc, char *argv[]) {
    BigInt res = power(BigInt(2), 63);
    std::cout << res << std::endl;
    return 0;
}
