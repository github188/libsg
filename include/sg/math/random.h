/**
 * random.h
 * "True" random number generator.
 */

#ifndef LIBSG_RANDOM_H
#define LIBSG_RANDOM_H

#include <sg/sg.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

long sg_random_l(void);

float sg_random_f(void);

long sg_random_range_l(long min, long max);

float sg_random_range_f(float min, float max);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBSG_RANDOM_H */
