/**
 * ntp_server.h
 * Network time protocol server.
 */

#ifndef LIBSG_NTP_SERVER_H
#define LIBSG_NTP_SERVER_H

#include <sg/sg.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

typedef struct sg_ntp_server_real sg_ntp_server_t;

sg_ntp_server_t *sg_ntp_server_open(const char *ip, int port);

bool sg_ntp_server_run(sg_ntp_server_t *self);

void sg_net_server_close(sg_ntp_server_t *self);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* LIBSG_NTP_SERVER_H */
