/*******************************************************************************
9.Time class is defined in the following manner:
class Time  {
int hour, minute, second;
public:
int hr_to_min() { . . . }
int hr_to_sec() { . . .}
};
class Logintime: private Time
{ . . . };
Can hr_to_min() and hr_to_sec() be invoked with a Logintime object?

Ans: No, we can't invoke Time class by Logintime class,
eventhough all the methods is in public, visibility mode if we set as
private means . all the  base class members will turn as private 
only for thatderived class.
*******************************************************************************/