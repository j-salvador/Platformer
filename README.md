# Glacier Platformer
### COMP313 Assignment 1 by James Magallanes (300364533)

###### Developed with Unreal Engine 4 | [Video Preview](https://www.youtube.com/watch?v=E9Ls13-lxA0&feature=youtu.be)
-----------------------------------------

My Glacier Platformer is a 2d platform game where you must run and complete the levels while avoiding the golem that chases you and tries to kill you if you get near! I used a sphere collision that is much larger than the golem model, so once the user enters the "danger radius" of the golem the golem will chase after them and swinging his club if he is in range.

The main action is to make your way through the levels, avoiding the hostile golem and the traps along the way. As you progress through the game and complete levels, the game keeps track of the levels you have completed and saves your progress. This saving function still works even after you close the game so you can continue your progress at a later date. 

The hardest part of making this platformer was getting the switching between the menus - getting the viewport/widgets switching back and forth correctly - and also the interaction between the player and the golem - the AI auto tracking the player and getting the throwing rock and punch damage working. This engine took a while to learn, and I had to play around with tools and interfaces in separate projects before utilising them in my main project.

In my eyes the most interesting thing about my game is the golem NPC. This golem is probably the most intricate being in my game as it can deal/take damage, drop health powerups when it dies and track the player's location as they move around it. 


Checklist:
- Control a character on screen DONE
- Change score on screen DONE
- Create/destroy objects DONE
- Move NPCs around DONE
- Play sounds DONE
- Restart a level DONE
- Show a final screen
- Create a settings menu DONE
- Create at lease one blueprint node in C++ DONE

Notes: I have made the blueprint node in C++ however the Unreal engine could not locate it, even though I followed [this tutorial](https://trashbyte.io/blog/2019/10/20/custom-blueprint-nodes-part1.html) which detailed the (very simple) process. I intended to use it as an addition function in the Health Pickup class instead of the provided float addition function. 




##### References
I used some free assets from craftpix.net. I used the [Free Pixel Art Tiny Hero Sprites](https://craftpix.net/freebies/free-pixel-art-tiny-hero-sprites/) character pack for the player's character, and the [Free Golem Tiny Style 2D Character Sprites](https://craftpix.net/freebies/free-golem-tiny-style-2d-character-sprites/) pack for the aggressive golem NPC.
I also used the [Glacial Mountains:Parallax Background](https://vnitti.itch.io/glacial-mountains-parallax-background) pack for the background and main menu image.
