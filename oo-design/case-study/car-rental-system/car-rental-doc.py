'''
SYSTEM REQUIREMENTS:
    1. Support the renting of different vehicles, like:
        Cars
        Trucks
        SUVs
        Vans
        Motorcycles

    2. Vehicle Info
        Unique barcode
        DETAILS - Make, Model, Year
        Parking stall number for location
    
    3. Tracking Rentals
        The system should show which member rented which vehicle
        It shonuld also list all vehicles rented by a specific number.
    
    4. Late fee handling
        Late fee charged automatically if returned past the due date

    5. Vehicle Search and Reservation
        Members must be able to search available vehicles
        They can reserve any available vehicle
    
    6. Notifications, send reminders:
        Before the reservation pickup date
        As the return date approaches
        If a vehicle is overdue
    
    7. Barcode Scanning
        The system should support the reading of vehicle barcodes (for check in/out and tracking)
    
    8. Reservation Management
        members can cancel reservations before pickup
    
    9. Vehicle Log Maintenance, track all vehicle events, like
        Refueling
        Cleaning
        Maintenance
        Damage reports
    
    10. Rental Insurance
        Members should have the option to add insurance to their reservation.

    11. Extra equipment rental
        Members can rent additional items like:
            Navigation Systems
            Child Seats
            Ski Ranks
    
    12. Additional Services
        Members can add extra services to their reservation, like:
            Roadside Assistance
            Additional drivers
            In-car Wi-Fi
'''
'''
USE CASE DIAGRAM:
    4 main actors in the system:
        Member:
            Seach catalogs
            Reserve vehicle
            Pick-Up vehicle
            Return Vehicle
            Cancel Reservation
            Add Equipment/Services - i.e insurance, child seat etc.

        Receptionist:
            Add, edit, remove vehucle
            Add, edit worker info
            Reserve on behalf of the member

        Worker:
            Service returned vehicle, refuel, clean, inspect
            Update Vehicle log - log damages, maintenance etc.

        System:
            Mainly responsible for sending notifications about overdue vehicles, canceled reservations etc.
    
    Top Use Cases
        Manage Vehicles – Add, remove, or edit vehicle details

        Search Catalog – Look up available vehicles by type

        Manage Membership – Register new members or cancel existing ones

        Reserve Vehicle – Book a vehicle for a future date

        Check-Out Vehicle – Pick up a reserved vehicle

        Return Vehicle – Return a rented vehicle

        Add Equipment – Attach extras like navigation, child seat, etc.

        Update Vehicle Log – Record events like fuel, cleaning, or damage



'''