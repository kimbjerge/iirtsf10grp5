/********************************************************************
	Rhapsody	: 7.5 
	Login		: KBE
	Component	: TargetComponent 
	Configuration 	: Target
	Model Element	: FrameBuffer
//!	Generated Date	: Sat, 15, May 2010  
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBuffer.cpp
*********************************************************************/

//## auto_generated
#include "FrameBuffer.h"
//## package Application::Continuous

//## class FrameBuffer
FrameBuffer::FrameBuffer() : pulse(0), sampleRate(0) {
}

FrameBuffer::~FrameBuffer() {
    //#[ operation ~FrameBuffer()
    delete buffer;
    //#]
}

void FrameBuffer::CreateBuffer(int size) {
    //#[ operation CreateBuffer(int)
    buffer = new int[size];
    writePos = 0;
    readPos = 0;
    bufSize = size;
    //#]
}

void FrameBuffer::Insert(int sample) {
    //#[ operation Insert(int)
    if (writePos < bufSize)
    	buffer[writePos++] = sample;
    //#]
}

int* FrameBuffer::getBuffer() const {
    return buffer;
}

void FrameBuffer::setBuffer(int* p_buffer) {
    buffer = p_buffer;
}

int FrameBuffer::getBufSize() const {
    return bufSize;
}

void FrameBuffer::setBufSize(int p_bufSize) {
    bufSize = p_bufSize;
}

bool FrameBuffer::isFull() {
    //#[ operation isFull()
    return writePos >= bufSize;
    //#]
}

FrameBuffer::FrameBuffer(int size) : pulse(0), sampleRate(0) {
    //#[ operation FrameBuffer(int)
    CreateBuffer(size);
    //#]
}

void FrameBuffer::First() {
    //#[ operation First()
    readPos = 0;
    //#]
}

bool FrameBuffer::IsDone() {
    //#[ operation IsDone()
    return (readPos >= writePos-1);
    //#]
}

void FrameBuffer::Next() {
    //#[ operation Next()
    if (readPos < writePos-1) readPos++;
    //#]
}

int FrameBuffer::getReadPos() const {
    return readPos;
}

void FrameBuffer::setReadPos(int p_readPos) {
    readPos = p_readPos;
}

int FrameBuffer::getWritePos() const {
    return writePos;
}

void FrameBuffer::setWritePos(int p_writePos) {
    writePos = p_writePos;
}

int FrameBuffer::GetSample() {
    //#[ operation GetSample()
    return buffer[readPos];
    //#]
}

void FrameBuffer::Clear() {
    //#[ operation Clear()
    writePos = 0;
    readPos = 0;
    
    
    //#]
}

int FrameBuffer::getPulse() const {
    return pulse;
}

void FrameBuffer::setPulse(int p_pulse) {
    pulse = p_pulse;
}

int FrameBuffer::getSampleRate() const {
    return sampleRate;
}

void FrameBuffer::setSampleRate(int p_sampleRate) {
    sampleRate = p_sampleRate;
}

/*********************************************************************
	File Path	: C:/Ubuntu_share/sapien190/source/Sandbox/sapine_v1/rpy/FrameBuffer.cpp
*********************************************************************/
