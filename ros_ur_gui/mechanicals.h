#ifndef __MECHANICALS_H__
#define __MECHANICALS_H__

#define MANNEDBULLDOZER 101//有人推土机
#define UNMANNEDBULLDOZER 201//无人推土机
#define MANNEDGRADER 102//有人平地机
#define MANNEDROLLER 103//有人压路机

#define MANNEDBULLDOZER_MT "101"//有人推土机
#define UNMANNEDBULLDOZER_MT "201"//无人推土机
#define MANNEDGRADER_MT "102"//有人平地机
#define MANNEDROLLER_MT "103"//有人压路机

#define MANNEDBULLDOZER_MC "004"//有人推土机机械编码
#define UNMANNEDBULLDOZER_MC "001"//无人推土机机械编码
#define MANNEDGRADER_MC "002"//有人平地机机械编码
#define MANNEDROLLER_MC "999"//有人压路机机械编码

#define MANNEDBULLDOZER_PC "713023393997258752"
#define UNMANNEDBULLDOZER_PC "713023393997258752"
#define MANNEDGRADER_PC "713023393997258752"
#define MANNEDROLLER_PC "713023393997258752"


typedef int (*pfunc_can_init) (const char*, unsigned int);
typedef int (*pfunc_can_reader) (int, unsigned int*, unsigned char*, int);

typedef int (*pfunc_http_send_param) (void);
typedef int (*pfunc_http_send_walking_request) (void);
typedef int (*pfunc_http_send_job_request) (void);

typedef void (*pfunc_http_parsing_parammsg) (void);
typedef void (*pfunc_http_parsing_walkingmsg) (void);
typedef void (*pfunc_http_parsing_taskmsg) (void);

typedef struct
{
	int machine_type;
	int can_bitrate;
	char can_device[10];
	int can_switch_status;
	int http_switch_status;
	int can_is_open;
	int http_is_open;
	pfunc_can_init can_init;
	pfunc_can_reader can_reader;

	pfunc_http_send_param http_send_param;
	pfunc_http_send_walking_request http_send_walking_request;
	pfunc_http_send_job_request http_send_job_request;
	
	pfunc_http_parsing_parammsg http_parsing_parammsg;
	pfunc_http_parsing_walkingmsg http_parsing_walkingmsg;
	pfunc_http_parsing_taskmsg http_parsing_taskmsg;
}Mechanicals;

void init_mechanicals_func(Mechanicals *pmechanicals);
//int httpPostSend(char* url);
#endif // !_