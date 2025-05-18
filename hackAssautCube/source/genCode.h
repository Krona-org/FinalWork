#pragma once

// Created with ReClass.NET 1.2 by KN4CK3R

class Vector3 {
public:
	float x;
	float y;
	float z;

};


class Player
{
public:
	Vector3 N00000056; //0x0004
	Vector3 velocity; //0x0010
	Vector3 N00000058; //0x001C
	Vector3 pos; //0x0028
	float yaw; //0x0034
	float pitch; //0x0038
	float roll; //0x003C
	char pad_0040[56]; //0x0040
	Vector3 N00000072; //0x007C
	Vector3 N00000073; //0x0088
	Vector3 N00000074; //0x0094
	char pad_00A0[184]; //0x00A0

	virtual void Function0();
	virtual void Function1();
	virtual void Function2();
	virtual void Function3();
	virtual void Function4();
	virtual void Function5();
	virtual void Function6();
	virtual void Function7();
	virtual void Function8();
	virtual void Function9();

}; //Size: 0x0158