#pragma once

class DrawAPI;
class Shape{
protected:
	DrawAPI* drawAPI;
public:
	void SetDrawAPI(DrawAPI* api);
	virtual void Draw(){};
};