#ifndef _MANNEDBULLDOZER_HTTP_
#define _MANNEDBULLDOZER_HTTP_

typedef struct
{
	int pointCntFor;
	double pointXFor[300];
	double pointYFor[300];
	
	int pointCntBac;
	double pointXBac[300];
	double pointYBac[300];
}mbd_Path;

typedef struct
{
	char task[2000];
}mbd_task;

void mbd_http_parse_param_info(void) ;
void mbd_http_parse_walking_info(void);
void mbd_http_parse_job_info(void);

int func_mannedbulldozer_http_send_param();
int func_mannedbulldozer_http_send_walking_request();
int func_mannedbulldozer_http_send_job_request();

#endif // !_MANNEDBULLDOZER_HTTP_