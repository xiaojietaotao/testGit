#ifndef __MANNED_BULLDOZER_CAN_H__
#define __MANNED_BULLDOZER_CAN_H__

/*engine_intake_manifold_tem //发动机进气歧管温度
engine_working_time //发动机工作时间
engine_speed //发动机转速
engine_failure_code //发动机故障代码
system_voltage //系统电压
engine_oil_pressure //发动机机油压力
engine_coolant_temperature//发动机冷却液温度
fuel_consumption //燃油消耗量

unmanned_bulldozer 201//无人推土机
manned_bulldozer 101//有人推土机
manned_grader 102//有人平地机
manned_roller 103//有人压路机
*/

typedef struct {
    int engine_intake_manifold_tem;//发动机进气歧管温度
}mbd_engine_intake_manifold_tem;

typedef struct {
    float engine_working_time;//发动机工作时间
}mbd_engine_working_time;

typedef struct {
    float engine_speed;//发动机转速
}mbd_engine_speed;

typedef struct {
    unsigned int engine_failure_code;//发动机故障代码
}mbd_engine_failure_code;

typedef struct {
    float system_voltage;//系统电压
}mbd_system_voltage;

typedef struct {
    int engine_oil_pressure;//发动机机油压力
}mbd_engine_oil_pressure;

typedef struct {
    int engine_coolant_temperature;//发动机冷却液温度
}mbd_engine_coolant_temperature;

typedef struct {
    float fuel_consumption;//燃油消耗量
}mbd_fuel_consumption;


void manned_bulldoezer_can_data_init();
void manned_bulldozer_engine_intake_manifold_tem_update(unsigned char* buf);
void manned_bulldozer_engine_working_time_update(unsigned char* buf);
void manned_bulldozer_engine_speed_update(unsigned char* buf);
void manned_bulldozer_engine_failure_code_update(unsigned char* buf);
void manned_bulldozer_system_voltage_update(unsigned char* buf);
void manned_bulldozer_engine_oil_pressure_update(unsigned char* buf);
void manned_bulldozer_engine_coolant_temperature_update(unsigned char* buf);
void manned_bulldozer_fuel_consumption_update(unsigned char* buf);

#endif