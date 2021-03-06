/**
 * dynlib.h
 * Dynamic library handle.
 */

#ifndef LIBSG_DYNLIB_H
#define LIBSG_DYNLIB_H

#include <sg/sg.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* handle type */
typedef void sg_dynlib_t;

/* Open dynamic library handle. */
sg_dynlib_t *sg_dynlib_open(const char *path);

/* Load function address by symbol from dynamic library. */
void *sg_dynlib_symbol(sg_dynlib_t *handle, const char *symbol);

/* Close dynamic library handle. */
void sg_dynlib_close(sg_dynlib_t **handle);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBSG_DYNLIB_H */