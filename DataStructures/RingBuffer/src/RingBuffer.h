#pragma once

template<typename T> class RingBuffer
{
public:
	RingBuffer(int len)
	{
		bufferSize = len;
		buffer = new T[len];
		readIndex = 0;
		writeIndex = 0;
	}

	~RingBuffer()
	{
		delete[] buffer;
	}

	int GetNext(int i)
	{
		return (i + 1) % bufferSize;
	}

	void Push(const T& item)
	{
		buffer[writeIndex] = item;
		writeIndex = GetNext(writeIndex);
	}

	bool Pop(const T& item)
	{

	}
	
	T& operator[](int i)
	{
		i = (readIndex + i) % bufferSize;
		return buffer[i];
	}

private:
	T* buffer;
	int bufferSize;
	int readIndex, writeIndex;
};