/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube    ---   Limitations and specifcities:    * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV and DATV demodulators, Channel Analyzer NG, LoRa demodulator   * The device settings and report structures contains only the sub-structure corresponding to the device type. The DeviceSettings and DeviceReport structures documented here shows all of them but only one will be or should be present at a time   * The channel settings and report structures contains only the sub-structure corresponding to the channel type. The ChannelSettings and ChannelReport structures documented here shows all of them but only one will be or should be present at a time    --- 
 *
 * OpenAPI spec version: 4.4.1
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGPlutoSdrOutputSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPlutoSdrOutputSettings::SWGPlutoSdrOutputSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPlutoSdrOutputSettings::SWGPlutoSdrOutputSettings() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    lpf_fir_enable = 0;
    m_lpf_fir_enable_isSet = false;
    lpf_firbw = 0;
    m_lpf_firbw_isSet = false;
    lpf_fi_rlog2_interp = 0;
    m_lpf_fi_rlog2_interp_isSet = false;
    lpf_fir_gain = 0;
    m_lpf_fir_gain_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    att = 0;
    m_att_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = nullptr;
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

SWGPlutoSdrOutputSettings::~SWGPlutoSdrOutputSettings() {
    this->cleanup();
}

void
SWGPlutoSdrOutputSettings::init() {
    center_frequency = 0L;
    m_center_frequency_isSet = false;
    dev_sample_rate = 0;
    m_dev_sample_rate_isSet = false;
    l_oppm_tenths = 0;
    m_l_oppm_tenths_isSet = false;
    lpf_fir_enable = 0;
    m_lpf_fir_enable_isSet = false;
    lpf_firbw = 0;
    m_lpf_firbw_isSet = false;
    lpf_fi_rlog2_interp = 0;
    m_lpf_fi_rlog2_interp_isSet = false;
    lpf_fir_gain = 0;
    m_lpf_fir_gain_isSet = false;
    log2_interp = 0;
    m_log2_interp_isSet = false;
    lpf_bw = 0;
    m_lpf_bw_isSet = false;
    att = 0;
    m_att_isSet = false;
    antenna_path = 0;
    m_antenna_path_isSet = false;
    transverter_mode = 0;
    m_transverter_mode_isSet = false;
    transverter_delta_frequency = 0L;
    m_transverter_delta_frequency_isSet = false;
    use_reverse_api = 0;
    m_use_reverse_api_isSet = false;
    reverse_api_address = new QString("");
    m_reverse_api_address_isSet = false;
    reverse_api_port = 0;
    m_reverse_api_port_isSet = false;
    reverse_api_device_index = 0;
    m_reverse_api_device_index_isSet = false;
}

void
SWGPlutoSdrOutputSettings::cleanup() {














    if(reverse_api_address != nullptr) { 
        delete reverse_api_address;
    }


}

SWGPlutoSdrOutputSettings*
SWGPlutoSdrOutputSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPlutoSdrOutputSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&dev_sample_rate, pJson["devSampleRate"], "qint32", "");
    
    ::SWGSDRangel::setValue(&l_oppm_tenths, pJson["LOppmTenths"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_fir_enable, pJson["lpfFIREnable"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_firbw, pJson["lpfFIRBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_fi_rlog2_interp, pJson["lpfFIRlog2Interp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_fir_gain, pJson["lpfFIRGain"], "qint32", "");
    
    ::SWGSDRangel::setValue(&log2_interp, pJson["log2Interp"], "qint32", "");
    
    ::SWGSDRangel::setValue(&lpf_bw, pJson["lpfBW"], "qint32", "");
    
    ::SWGSDRangel::setValue(&att, pJson["att"], "qint32", "");
    
    ::SWGSDRangel::setValue(&antenna_path, pJson["antennaPath"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_mode, pJson["transverterMode"], "qint32", "");
    
    ::SWGSDRangel::setValue(&transverter_delta_frequency, pJson["transverterDeltaFrequency"], "qint64", "");
    
    ::SWGSDRangel::setValue(&use_reverse_api, pJson["useReverseAPI"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_address, pJson["reverseAPIAddress"], "QString", "QString");
    
    ::SWGSDRangel::setValue(&reverse_api_port, pJson["reverseAPIPort"], "qint32", "");
    
    ::SWGSDRangel::setValue(&reverse_api_device_index, pJson["reverseAPIDeviceIndex"], "qint32", "");
    
}

QString
SWGPlutoSdrOutputSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();

    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    delete obj;
    return QString(bytes);
}

QJsonObject*
SWGPlutoSdrOutputSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    if(m_center_frequency_isSet){
        obj->insert("centerFrequency", QJsonValue(center_frequency));
    }
    if(m_dev_sample_rate_isSet){
        obj->insert("devSampleRate", QJsonValue(dev_sample_rate));
    }
    if(m_l_oppm_tenths_isSet){
        obj->insert("LOppmTenths", QJsonValue(l_oppm_tenths));
    }
    if(m_lpf_fir_enable_isSet){
        obj->insert("lpfFIREnable", QJsonValue(lpf_fir_enable));
    }
    if(m_lpf_firbw_isSet){
        obj->insert("lpfFIRBW", QJsonValue(lpf_firbw));
    }
    if(m_lpf_fi_rlog2_interp_isSet){
        obj->insert("lpfFIRlog2Interp", QJsonValue(lpf_fi_rlog2_interp));
    }
    if(m_lpf_fir_gain_isSet){
        obj->insert("lpfFIRGain", QJsonValue(lpf_fir_gain));
    }
    if(m_log2_interp_isSet){
        obj->insert("log2Interp", QJsonValue(log2_interp));
    }
    if(m_lpf_bw_isSet){
        obj->insert("lpfBW", QJsonValue(lpf_bw));
    }
    if(m_att_isSet){
        obj->insert("att", QJsonValue(att));
    }
    if(m_antenna_path_isSet){
        obj->insert("antennaPath", QJsonValue(antenna_path));
    }
    if(m_transverter_mode_isSet){
        obj->insert("transverterMode", QJsonValue(transverter_mode));
    }
    if(m_transverter_delta_frequency_isSet){
        obj->insert("transverterDeltaFrequency", QJsonValue(transverter_delta_frequency));
    }
    if(m_use_reverse_api_isSet){
        obj->insert("useReverseAPI", QJsonValue(use_reverse_api));
    }
    if(reverse_api_address != nullptr && *reverse_api_address != QString("")){
        toJsonValue(QString("reverseAPIAddress"), reverse_api_address, obj, QString("QString"));
    }
    if(m_reverse_api_port_isSet){
        obj->insert("reverseAPIPort", QJsonValue(reverse_api_port));
    }
    if(m_reverse_api_device_index_isSet){
        obj->insert("reverseAPIDeviceIndex", QJsonValue(reverse_api_device_index));
    }

    return obj;
}

qint64
SWGPlutoSdrOutputSettings::getCenterFrequency() {
    return center_frequency;
}
void
SWGPlutoSdrOutputSettings::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
    this->m_center_frequency_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getDevSampleRate() {
    return dev_sample_rate;
}
void
SWGPlutoSdrOutputSettings::setDevSampleRate(qint32 dev_sample_rate) {
    this->dev_sample_rate = dev_sample_rate;
    this->m_dev_sample_rate_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLOppmTenths() {
    return l_oppm_tenths;
}
void
SWGPlutoSdrOutputSettings::setLOppmTenths(qint32 l_oppm_tenths) {
    this->l_oppm_tenths = l_oppm_tenths;
    this->m_l_oppm_tenths_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLpfFirEnable() {
    return lpf_fir_enable;
}
void
SWGPlutoSdrOutputSettings::setLpfFirEnable(qint32 lpf_fir_enable) {
    this->lpf_fir_enable = lpf_fir_enable;
    this->m_lpf_fir_enable_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLpfFirbw() {
    return lpf_firbw;
}
void
SWGPlutoSdrOutputSettings::setLpfFirbw(qint32 lpf_firbw) {
    this->lpf_firbw = lpf_firbw;
    this->m_lpf_firbw_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLpfFiRlog2Interp() {
    return lpf_fi_rlog2_interp;
}
void
SWGPlutoSdrOutputSettings::setLpfFiRlog2Interp(qint32 lpf_fi_rlog2_interp) {
    this->lpf_fi_rlog2_interp = lpf_fi_rlog2_interp;
    this->m_lpf_fi_rlog2_interp_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLpfFirGain() {
    return lpf_fir_gain;
}
void
SWGPlutoSdrOutputSettings::setLpfFirGain(qint32 lpf_fir_gain) {
    this->lpf_fir_gain = lpf_fir_gain;
    this->m_lpf_fir_gain_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLog2Interp() {
    return log2_interp;
}
void
SWGPlutoSdrOutputSettings::setLog2Interp(qint32 log2_interp) {
    this->log2_interp = log2_interp;
    this->m_log2_interp_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getLpfBw() {
    return lpf_bw;
}
void
SWGPlutoSdrOutputSettings::setLpfBw(qint32 lpf_bw) {
    this->lpf_bw = lpf_bw;
    this->m_lpf_bw_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getAtt() {
    return att;
}
void
SWGPlutoSdrOutputSettings::setAtt(qint32 att) {
    this->att = att;
    this->m_att_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getAntennaPath() {
    return antenna_path;
}
void
SWGPlutoSdrOutputSettings::setAntennaPath(qint32 antenna_path) {
    this->antenna_path = antenna_path;
    this->m_antenna_path_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getTransverterMode() {
    return transverter_mode;
}
void
SWGPlutoSdrOutputSettings::setTransverterMode(qint32 transverter_mode) {
    this->transverter_mode = transverter_mode;
    this->m_transverter_mode_isSet = true;
}

qint64
SWGPlutoSdrOutputSettings::getTransverterDeltaFrequency() {
    return transverter_delta_frequency;
}
void
SWGPlutoSdrOutputSettings::setTransverterDeltaFrequency(qint64 transverter_delta_frequency) {
    this->transverter_delta_frequency = transverter_delta_frequency;
    this->m_transverter_delta_frequency_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getUseReverseApi() {
    return use_reverse_api;
}
void
SWGPlutoSdrOutputSettings::setUseReverseApi(qint32 use_reverse_api) {
    this->use_reverse_api = use_reverse_api;
    this->m_use_reverse_api_isSet = true;
}

QString*
SWGPlutoSdrOutputSettings::getReverseApiAddress() {
    return reverse_api_address;
}
void
SWGPlutoSdrOutputSettings::setReverseApiAddress(QString* reverse_api_address) {
    this->reverse_api_address = reverse_api_address;
    this->m_reverse_api_address_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getReverseApiPort() {
    return reverse_api_port;
}
void
SWGPlutoSdrOutputSettings::setReverseApiPort(qint32 reverse_api_port) {
    this->reverse_api_port = reverse_api_port;
    this->m_reverse_api_port_isSet = true;
}

qint32
SWGPlutoSdrOutputSettings::getReverseApiDeviceIndex() {
    return reverse_api_device_index;
}
void
SWGPlutoSdrOutputSettings::setReverseApiDeviceIndex(qint32 reverse_api_device_index) {
    this->reverse_api_device_index = reverse_api_device_index;
    this->m_reverse_api_device_index_isSet = true;
}


bool
SWGPlutoSdrOutputSettings::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_center_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_dev_sample_rate_isSet){ isObjectUpdated = true; break;}
        if(m_l_oppm_tenths_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_fir_enable_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_firbw_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_fi_rlog2_interp_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_fir_gain_isSet){ isObjectUpdated = true; break;}
        if(m_log2_interp_isSet){ isObjectUpdated = true; break;}
        if(m_lpf_bw_isSet){ isObjectUpdated = true; break;}
        if(m_att_isSet){ isObjectUpdated = true; break;}
        if(m_antenna_path_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_mode_isSet){ isObjectUpdated = true; break;}
        if(m_transverter_delta_frequency_isSet){ isObjectUpdated = true; break;}
        if(m_use_reverse_api_isSet){ isObjectUpdated = true; break;}
        if(reverse_api_address != nullptr && *reverse_api_address != QString("")){ isObjectUpdated = true; break;}
        if(m_reverse_api_port_isSet){ isObjectUpdated = true; break;}
        if(m_reverse_api_device_index_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

