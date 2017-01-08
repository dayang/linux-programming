#ifndef TLPI_HDR_H
#define TLPI_HDR_H   /* Prevent accidental double inclusion */

#include <sys/types.h>  /* Type definitions used by many pargrams */
#include <stdio.h> /* Standard I/O functions */
#include <stdlib.h> /* Prototypes of commonly used used library functions,
                      plus EXIT_SUCCESS and EXIT_FAILURE constants */
#include <unistd.h> /* Prototypes for many system calls */
#include <errno.h> /* Declares errno and defines error constants */
#include <string.h> /* commonly used string-handling functions */

#include "get_num.h" /* Declares our function for handling numeric arguments (getInt(),
                        getLong()) */
#include "error_functions.h" /* Declares our error-handling functions */

typedef enum {FALSE, TRUE} Boolean;

#define min(m,n) ((m) < (n) ? (m) : (n))
#define max(m,n) ((m) > (n) ? (m) : (n))

#endif
