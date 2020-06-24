#ifndef _MANNEDROLLER_HTTP_
#define _MANNEDROLLER_HTTP_

typedef struct
{
	int pointCntFor;
	double pointXFor[300];
	double pointYFor[300];
	
	int pointCntBac;
	double pointXBac[300];
	double pointYBac[300];
}mrl_Path;

typedef struct
{
	char task[2000];
}mrl_task;

void mrl_http_parse_param_info(void) ;
void mrl_http_parse_walking_info(void);
void mrl_http_parse_job_info(void);

int func_mrl_http_send_param();
int func_mrl_http_send_walking_request();
int func_mrl_http_send_job_request();

#endif // !_MANNEDBULLDOZER_HTTP_