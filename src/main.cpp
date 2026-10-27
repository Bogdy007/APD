float convertVoltageToTemperature(float voltage) {
    return (voltage - 0.5f) * 100.0f;
float convertAdcToVoltage(int rawAdc) {
    return (rawAdc * 5.0f) / 1023.0f;
}