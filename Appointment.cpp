#include "Appointment.h"
#include <iostream>
using namespace std;

Appointment::Appointment(Patient* patient, Doctor* doctor, const string& date)
    : patient(patient), doctor(doctor), date(date), confirmed(false) {}

void Appointment::confirm() {
    confirmed = true;
    cout << "Appointment confirmed.\n";
}

void Appointment::cancel() {
    confirmed = false;
    cout << "Appointment canceled.\n";
}

string Appointment::getInfo() const {
    return "Appointment on " + date + (confirmed ? " [Confirmed]" : " [Not Confirmed]");
}