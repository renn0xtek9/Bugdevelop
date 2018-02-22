#include "loger.hpp"

void Loger::setOutputFolder(std::string p_outputfolder){
}
void Loger::closeLogFile(){
}
void Loger::openLogFile(){
}
void Loger::setLogFile(const std::string& name){
}
bool Loger::loggingEnabled(){
}
void Loger::setLoggingEnabled(bool enabled){
}
void Loger::handleError (Error p_errcode,bool p_repeat,bool p_exit) noexcept{
}
void Loger::log(const char* text){
}
void Loger::log(const std::string& text, LogMessageType type ,bool showinstdout){
}
