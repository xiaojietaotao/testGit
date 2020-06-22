#ifndef __UNMANNEDBULLDOZER_CAN_H__
#define __UNMANNEDBULLDOZER_CAN_H__

typedef struct
{
	char machineCode[100];
	char projectCode[100];
	
	int brakeState;
	int bladeLockState;
	int walkLockState;
	int forwardState;
	int backwardState;
	
	int engineRpm;
	float forwardGear;
	float backGear;
}walkState;

typedef struct 
{
	int oilPressureState;
	
	int engineTpState;
	
	int systemVoltageState;
	
	float workHours;
	
	int engineWaterTp;
	
	int oilTp;
	
	int oilLevel;
}sysState;

typedef struct 
{
	int leftMotorRpm;
	
	int rightMotorRpm;
	
	float leftMotorSpeed;
	
	float rightMotorSpeed;
	
	int vehicleErrorCode;
	
}sysSpeed;

typedef struct 
{
	unsigned int errorCode;
}sysErrorCode;


void walkStateUpdate(unsigned char* buf);
void sysStateUpdate(unsigned char* buf);
void sysSpeedUpdate(unsigned char* buf);
void sysErrorCodeUpdate(unsigned char* buf);
void vehicleParametersInit(void);


#endif // !__DATAPROCESS_H__
