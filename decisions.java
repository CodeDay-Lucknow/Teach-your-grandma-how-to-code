class decisions
{
    public static void main(String []args)
    {
        int age = 21;
        if(age >= 18){
            System.out.println("You're good to vote");
        }else{
            System.out.println("Nahh, grow up");
        }


        // Set the value of the day variable to 3 
        int day = 3; 
        // Use a switch statement to determine the name of 
        // the day of the week 
        switch (day) { 
            case 1:
                System.out.println("Monday"); 
                break;  // If day equals 1, print "Monday" 
            case 2:
                System.out.println("Tuesday");
                break;  // If day equals 2, print "Tuesday" 
            case 3:
                System.out.println("Wednesday");
                break; // If day equals 3, print "Wednesday" 
            case 4:
                System.out.println("Thursday");
                break; // If day equals 4, print "Thursday" 
            case 5:
                System.out.println("Friday");
                break;   // If day equals 5, print "Friday" 
            case 6:
                System.out.println("Saturday");
                break; // If day equals 6, print "Saturday" 
            case 7:
                System.out.println("Sunday"); 
                break;  // If day equals 7, print "Sunday" 
            default:
                System.out.println("Invalid day");
                break; // If day is not in the range 1-7, print "Invalid day" 
        }
    }
}