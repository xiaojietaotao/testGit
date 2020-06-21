#ifndef _MANNED_ROLLER_CAN_
#define _MANNED_ROLLER_CAN_

typedef struct {
    int engine_intake_manifold_tem;//发动机进气歧管温度
}mrl_engine_intake_manifold_tem;

typedef struct {
    float engine_working_time;//发动机工作时间
}mrl_engine_working_time;

typedef struct {
    float engine_speed;//发动机转速
}mrl_engine_speed;

typedef struct {
    unsigned int engine_failure_code;//发动机故障代码
}mrl_engine_failure_code;

typedef struct {
    float system_voltage;//系统电压
}mrl_system_voltage;

typedef struct {
    int engine_oil_pressure;//发动机机油压力
}mrl_engine_oil_pressure;

typedef struct {
    int engine_coolant_temperature;//发动机冷却液温度
}mrl_engine_coolant_temperature;

typedef struct {
    float fuel_consumption;//燃油消耗量
}mrl_fuel_consumption;

void mrl_can_data_init();
void mrl_engine_intake_manifold_tem_update(unsigned char* buf);
void mrl_engine_working_time_update(unsigned char* buf);
void mrl_engine_speed_update(unsigned char* buf);
void mrl_engine_failure_code_update(unsigned char* buf);
void mrl_system_voltage_update(unsigned char* buf);
void mrl_engine_oil_pressure_update(unsigned char* buf);
void mrl_engine_coolant_temperature_update(unsigned char* buf);
void mrl_fuel_consumption_update(unsigned char* buf);

#endif