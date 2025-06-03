'''
    Purpose of class diagrams:
        1. Analysis and design of the static view of an application
        2. To describe the responsibilities of a system.
        3. To provide a base for component and deployment diagrams.
        4. Forward and reverse engineering

    Class name, Class Properties, Class Methods
'''

'''
    Relationships between classes:
        Association - This means two clases are connected so they can work together, In UML, it is shown with a line between the classes, which can be either:
                        Bi-directional - Both classes know about eachother.
                        Uni-directional - Only one class knows about the other
                    // association = communication link between classes, and it can go one-way or both ways. //
                    student ────────▶ course

        Multiplicity - This defines how many objects from one class can be linked to objects of another class
                       One student can take many courses -> 0..*
                       One course can have many students -> 0..*
                       Student 0..* <---------> 0..* Course , many-to-many association

        Aggregation - One class is made up of other parts, but the parts can still exist if the whole is deleted. So, WHOLE - Part (parts can live on their own)
                      For examples:
                        An Airline has multiple Aircrafts, but if the airline is shut down, the aircraft still exists.
                        // Airline ◇─── Aircraft //
        
        Composition - WHOLE - Part (parts die with the whole). One class being made up of other parts, and those parts can not exist without the whole class.
                        For example: A Flight has a WeeklySchedule.
                        If the Flight is deleted, its WeeklySchedule is also deleted.
                        // Flight ◆─── WeeklySchedule //

        Generalization - "Is-a" relationship(inheritance). So, a base class has shared traits and other classes extend it
                            For example: Pilot, Admin, and Crew are all types of Person.
                              Person
                                ▲
                               /|\
                          Pilot Admin Crew
        Dependency - "Uses" relationship (temporary) So, One class needs another to do something but doesn't own it. 
                        For example: A FlightReservation uses a Payment system.
                                     FlightReservation - - - - > Payment 
        
        Abstract Class: This is identified by specifying it's name in italics.
''' 