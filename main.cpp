#include "pch.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>

#include "poker.h"

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    createDeck();
}
