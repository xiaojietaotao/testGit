#ifndef _MANNEDGRADER_HTTP_
#define _MANNEDGRADER_HTTP_

typedef struct
{
	int pointCntFor;
	double pointXFor[300];
	double pointYFor[300];
	
	int pointCntBac;
	double pointXBac[300];
	double pointYBac[300];
}mgd_Path;

void mgd_http_parse_param_info(void) ;
void mgd_http_parse_walking_info(void);
void mgd_http_parse_job_info(void);

int func_mgd_http_send_param();
int func_mgd_http_send_walking_request();
int func_mgd_http_send_job_request();

#endif // !_MANNEDBULLDOZER_HTTP_