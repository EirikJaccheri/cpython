/* Minimal main program -- everything is loaded from the library */

#include "Python.h"
#include "tool/args/args.h"

#ifdef MS_WINDOWS
int
wmain(int argc, wchar_t **argv)
{
    return Py_Main(argc, argv);
}
#else
int
main(int argc, char **argv)
{
    LoadZipArgs(&argc, &argv);
    return Py_BytesMain(argc, argv);
}
#endif
