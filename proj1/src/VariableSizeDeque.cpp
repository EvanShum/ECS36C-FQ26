#include "VariableSizeDeque.h"

struct CVariableSizeDeque::SImplementation{

};

CVariableSizeDeque::CVariableSizeDeque(){
    DImplementation = std::make_unique<SImplementation>();
}

CVariableSizeDeque::~CVariableSizeDeque(){

}

TDequeSize CVariableSizeDeque::Size() const{

}

TDequeSize CVariableSizeDeque::MaxSize() const{

}

std::any CVariableSizeDeque::Front() const{

}

std::any CVariableSizeDeque::Back() const{

}

bool CVariableSizeDeque::PushBack(std::any item){

}

bool CVariableSizeDeque::PushFront(std::any item){

}

bool CVariableSizeDeque::PopBack(){

}

bool CVariableSizeDeque::PopFront(){

}

