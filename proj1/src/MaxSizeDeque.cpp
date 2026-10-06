#include "MaxSizeDeque.h"

struct CMaxSizeDeque::SImplementation{

};

CMaxSizeDeque::CMaxSizeDeque(TDequeSize maxsize){
    DImplementation = std::make_unique<SImplementation>(maxsize);
}

CMaxSizeDeque::~CMaxSizeDeque(){

}

TDequeSize CMaxSizeDeque::Size() const{

}

TDequeSize CMaxSizeDeque::MaxSize() const{

}

std::any CMaxSizeDeque::Front() const{

}

std::any CMaxSizeDeque::Back() const{

}

bool CMaxSizeDeque::PushBack(std::any item){

}

bool CMaxSizeDeque::PushFront(std::any item){

}

bool CMaxSizeDeque::PopBack(){

}

bool CMaxSizeDeque::PopFront(){

}

