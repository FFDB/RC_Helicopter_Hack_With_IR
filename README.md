# RC_Helicopter_Hack_with_IR

---April 2018---

This was a project designed to hack an RC Helicopter through IR Signals.
We initially planned to used a "hacker's" mindset and capture IR signals 
that the helicopter sent out, then replay them through an IR Transmitter.
The IR Transmitter we used was a Samsung Galaxy S5. In order to make the
transmitter work like it was supposed to, we made Android code to make it
transmit the correct data that we wanted to send to the helicopter.

This project is still a work in progress, and we have found some flaws in
what we are doing. First, the Arduino IR module will only recieve 38Khz
IR signals the best, and secondly, the IR transmitter on the phone was
designed for 38Khz frequency as well. So, unfortunately we figured out that
the helicopter's signal frequency operated in the MHz range. We were not
able to send the correct frequency the helicopter needed in order to perform
functions.

From here, we plan to first get a better IR Reciever and Transmitter to operate
in the MHz range. Then, if we get it to work, make the helicopter fly specific
mapped paths in the air, and land in a designated location.

-----------------
