

## wotcher
[![View PCB on KiCanvas](https://hack.club/pcb-badge)](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2Fmakrcat%2Fwotcher%2Fblob%2Fmain%2Fwotcher-pcb)

wotcher is a digital raise-to-wake LED watch, with 89 LEDs in total! It uses something called charlieplexing to make all the lights glow at once. 

<img src="assets/image.png" width= "500px">

## circuit design
Charlieplexing is a method to limit current & control many LED's with only a couple of microcontroller pins, by switching between LEDs really fast so it looks like they're always on, due to the phenomenon of persistence of vision.

- My project uses a charlieplexing chip (IS31FL3731-QF) to drive the 7-segment display & all 60 LEDs, which is 88 LEDs in total. 
- The clock chip (DS3231MZ+) is necessary here because the ATtiny's internal RC oscillator clock is terrible at time keeping. The clock chip only drifts like 2 seconds a year! So that's cool.
- I'm also including an accelerometer so that it's raise-to-wake, like those Apple watches.

# some inspiration

It's inspired by various retro-style watches, such as the aptly named retrowatch, the charlie watch, and the decko circuit face watch, as well as other pinterest pictures.

<img src="assets/othercool.png" width="500px">

<i>from left to right, <a src="https://trmm.net/Charliewatch/">charliewatch</a>, <a src="https://github.com/RafaelRiber/RetroWatch">retrowatch</a>, decko (by the Terminelectro company)</i>

## features

I'm going to use embedded c++ to code this later, when I get my breadboard components. 