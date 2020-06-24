#ifndef _SETUP_H__
#define _SETUP_H__
#include "unmannedbulldozer_can.h"
#include "manned_bulldozer_can.h"
#include "manned_grader_can.h"
#include "manned_roller_can.h"

#include "unmannedbulldozer_http.h"
#include "mannedbulldozer_http.h"
#include "mannedgrader_http.h"
#include "mannedroller_http.h"
#include  "mechanicals.h"

//无人推土机CAN数据共享
extern walkState umbd_msg_walkState;
extern sysState umbd_msg_sysState;
extern sysSpeed umbd_msg_sysSpeed;
extern sysErrorCode umbd_msg_sysErrorCode;
extern umbd_task umbd_msg_task;

//有人推土机CAN数据共享
extern mbd_engine_intake_manifold_tem    mbd_msg_engine_intake_manifold_tem;
extern mbd_engine_working_time    mbd_msg_engine_working_time;
extern mbd_engine_speed    mbd_msg_engine_speed;
extern mbd_engine_failure_code    mbd_msg_engine_failure_code;
extern mbd_system_voltage    mbd_msg_system_voltage;
extern mbd_engine_oil_pressure    mbd_msg_engine_oil_pressure;
extern mbd_engine_coolant_temperature    mbd_msg_engine_coolant_temperature;
extern mbd_fuel_consumption    mbd_msg_fuel_consumption;
extern mbd_task mbd_msg_task;

//有人平地机
extern mgd_engine_intake_manifold_tem    mgd_msg_engine_intake_manifold_tem;
extern mgd_engine_working_time    mgd_msg_engine_working_time;
extern mgd_engine_speed    mgd_msg_engine_speed;
extern mgd_engine_failure_code    mgd_msg_engine_failure_code;
extern mgd_system_voltage    mgd_msg_system_voltage;
extern mgd_engine_oil_pressure    mgd_msg_engine_oil_pressure;
extern mgd_engine_coolant_temperature    mgd_msg_engine_coolant_temperature;
extern mgd_fuel_consumption    mgd_msg_fuel_consumption;
extern mgd_task mgd_msg_task;

//有人压路机
extern mrl_engine_intake_manifold_tem    mrl_msg_engine_intake_manifold_tem;
extern mrl_engine_working_time    mrl_msg_engine_working_time;
extern mrl_engine_speed    mrl_msg_engine_speed;
extern mrl_engine_failure_code    mrl_msg_engine_failure_code;
extern mrl_system_voltage    mrl_msg_system_voltage;
extern mrl_engine_oil_pressure    mrl_msg_engine_oil_pressure;
extern mrl_engine_coolant_temperature    mrl_msg_engine_coolant_temperature;
extern mrl_fuel_consumption    mrl_msg_fuel_consumption;
extern mrl_task mrl_msg_task;

//有人/无人运行数值
extern Mechanicals machine;

void machine_if_init(void);
void machine_if_launch(int type, int baudrate);
void machine_if_close(void);

int get_machine_if_sta(void);
int get_http_run_sta(void);
int get_can_run_sta(void);

void test_msg_send(void);
#endif