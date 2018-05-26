/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGDeviceReport.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGDeviceReport::SWGDeviceReport(QString* json) {
    init();
    this->fromJson(*json);
}

SWGDeviceReport::SWGDeviceReport() {
    device_hw_type = nullptr;
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_report = nullptr;
    m_airspy_report_isSet = false;
    airspy_hf_report = nullptr;
    m_airspy_hf_report_isSet = false;
    file_source_report = nullptr;
    m_file_source_report_isSet = false;
}

SWGDeviceReport::~SWGDeviceReport() {
    this->cleanup();
}

void
SWGDeviceReport::init() {
    device_hw_type = new QString("");
    m_device_hw_type_isSet = false;
    tx = 0;
    m_tx_isSet = false;
    airspy_report = new SWGAirspyReport();
    m_airspy_report_isSet = false;
    airspy_hf_report = new SWGAirspyHFReport();
    m_airspy_hf_report_isSet = false;
    file_source_report = new SWGFileSourceReport();
    m_file_source_report_isSet = false;
}

void
SWGDeviceReport::cleanup() {
    if(device_hw_type != nullptr) { 
        delete device_hw_type;
    }

    if(airspy_report != nullptr) { 
        delete airspy_report;
    }
    if(airspy_hf_report != nullptr) { 
        delete airspy_hf_report;
    }
    if(file_source_report != nullptr) { 
        delete file_source_report;
    }
}

SWGDeviceReport*
SWGDeviceReport::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGDeviceReport::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&device_hw_type, pJson["deviceHwType"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&tx, pJson["tx"], "qint32", "");
    
    ::SWGSDRangel::setValue(&airspy_report, pJson["airspyReport"], "SWGAirspyReport", "SWGAirspyReport");
    
    ::SWGSDRangel::setValue(&airspy_hf_report, pJson["airspyHFReport"], "SWGAirspyHFReport", "SWGAirspyHFReport");
    
    ::SWGSDRangel::setValue(&file_source_report, pJson["fileSourceReport"], "SWGFileSourceReport", "SWGFileSourceReport");
    
}

QString
SWGDeviceReport::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGDeviceReport::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(device_hw_type != nullptr && *device_hw_type != QString("")){
        toJsonValue(QString("deviceHwType"), device_hw_type, obj, QString("QString"));
    }
    if(m_tx_isSet){
        obj->insert("tx", QJsonValue(tx));
    }
    if((airspy_report != nullptr) && (airspy_report->isSet())){
        toJsonValue(QString("airspyReport"), airspy_report, obj, QString("SWGAirspyReport"));
    }
    if((airspy_hf_report != nullptr) && (airspy_hf_report->isSet())){
        toJsonValue(QString("airspyHFReport"), airspy_hf_report, obj, QString("SWGAirspyHFReport"));
    }
    if((file_source_report != nullptr) && (file_source_report->isSet())){
        toJsonValue(QString("fileSourceReport"), file_source_report, obj, QString("SWGFileSourceReport"));
    }

    return obj;
}

QString*
SWGDeviceReport::getDeviceHwType() {
    return device_hw_type;
}
void
SWGDeviceReport::setDeviceHwType(QString* device_hw_type) {
    this->device_hw_type = device_hw_type;
    this->m_device_hw_type_isSet = true;
}

qint32
SWGDeviceReport::getTx() {
    return tx;
}
void
SWGDeviceReport::setTx(qint32 tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

SWGAirspyReport*
SWGDeviceReport::getAirspyReport() {
    return airspy_report;
}
void
SWGDeviceReport::setAirspyReport(SWGAirspyReport* airspy_report) {
    this->airspy_report = airspy_report;
    this->m_airspy_report_isSet = true;
}

SWGAirspyHFReport*
SWGDeviceReport::getAirspyHfReport() {
    return airspy_hf_report;
}
void
SWGDeviceReport::setAirspyHfReport(SWGAirspyHFReport* airspy_hf_report) {
    this->airspy_hf_report = airspy_hf_report;
    this->m_airspy_hf_report_isSet = true;
}

SWGFileSourceReport*
SWGDeviceReport::getFileSourceReport() {
    return file_source_report;
}
void
SWGDeviceReport::setFileSourceReport(SWGFileSourceReport* file_source_report) {
    this->file_source_report = file_source_report;
    this->m_file_source_report_isSet = true;
}


bool
SWGDeviceReport::isSet(){
    bool isObjectUpdated = false;
    do{
        if(device_hw_type != nullptr && *device_hw_type != QString("")){ isObjectUpdated = true; break;}
        if(m_tx_isSet){ isObjectUpdated = true; break;}
        if(airspy_report != nullptr && airspy_report->isSet()){ isObjectUpdated = true; break;}
        if(airspy_hf_report != nullptr && airspy_hf_report->isSet()){ isObjectUpdated = true; break;}
        if(file_source_report != nullptr && file_source_report->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

