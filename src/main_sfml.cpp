#include "../sfml/app.hpp"
#include "person.hpp"
#include "doctor.hpp"
#include "admin.hpp"
#include "appointment.hpp"
#include "bill.hpp"
#include "prescription.hpp"
#include "patient.hpp"

#include "storage.hpp"
#include "invalid_input_exception.hpp"
#include "validator.hpp"
#include "file_handler.hpp"

Storage<Patient> patients;
Storage<Doctor> doctors;
Storage<Admin> admins;
Storage<Appointment> appointments;
Storage<Bill> bills;
Storage<Prescription> prescriptions;


void refresh_vars()
{
    FileHandler::load_doctors(doctors, "doctors.txt");
    FileHandler::load_admins(admins, "admin.txt");
    FileHandler::load_appointments(appointments, "appointments.txt");
    FileHandler::load_bills(bills, "bills.txt");
    FileHandler::load_prescriptions(prescriptions, "prescriptions.txt");
}

int main()
{
    refresh_vars();
    
    App app;
    app.run();
    return 0;
}
