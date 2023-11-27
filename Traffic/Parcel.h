#ifndef Parcel_h
#define Parcel_h


template<typename T>
struct Parcel
{
private:
	T data;
public:
	float width;
	float length;
	float weight;
	float cost;

	Parcel(T data, float width, float length, float weight, float cost)
	{
		this->data = data;
		this->width = width;
		this->length = length;
		this->weight = weight;
		this->cost = cost;
	}
	Parcel(T data)
	{
		this->data = data;
	}

	inline T getData() const
	{
		return data;
	}
};

#endif 