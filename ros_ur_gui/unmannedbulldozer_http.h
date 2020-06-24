#ifndef  __UNMANNEDBULLDOZER_HTTP_H__
#define __UNMANNEDBULLDOZER_HTTP_H__
#include "stdio.h"

typedef struct
{
	int pointCntFor;
	double pointXFor[300];
	double pointYFor[300];
	
	int pointCntBac;
	double pointXBac[300];
	double pointYBac[300];
}unmannedBulldozerPath;

void umbd_http_parse_param_info(void) ;
void umbd_http_parse_walking_info(void);
void umbd_http_parse_job_info(void);

int func_unmannedbulldozer_http_send_param();
int func_unmannedbulldozer_http_send_walking_request();
int func_unmannedbulldozer_http_send_job_request();

#endif // !1