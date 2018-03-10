# C++ Module: Arcade Protocol Specification

This document covers the interfaces and the protocol between the Graphics libraries and the Game libraries in the context of the EPITECH C++ Arcade project.

If you are going to implement this specification, please pay attention to not modify any class or enum names and to keep those under the "Arcade" namespace.

## Utilities

The protocol will be referring to a few primitives for representing things like Vectors and Colors.  
This section describes their prototypes.  

```C++
namespace Arcade {
	template<typename T>
	class Vect {
	public:
		Vect(T x = 0, T y = 0);
		void setXY(T x = 0, T y = 0);
		void setX(T x = 0);
		void setY(T y = 0);
		T getX() const;
		T getY() const;

	private:
		T _x;
		T _y;
	};

	class Color {
	public:
		Color(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);
		void setColor(unsigned char red = 0, unsigned char green = 0,
			unsigned char blue = 0, unsigned char alpha = 0);
		unsigned char getRed() const;
		unsigned char getGreen() const;
		unsigned char getBlue() const;
		unsigned char getAlpha() const;
		void setRed(unsigned char red);
		void setGreen(unsigned char green);
		void setBlue(unsigned char blue);
		void setAlpha(unsigned char alpha);

	private:
		unsigned char _red;
		unsigned char _green;
		unsigned char _blue;
		unsigned char _alpha;
	};

	enum Keys {
		A, B, C, D, E, F, G, H, I, J, K, L, M,
		N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
		LEFT, RIGHT, UP, DOWN,
		ENTER, SPACE, DELETE, BACKSPACE, TAB, ESC,
		MOUSELEFT, MOUSERIGHT
	};
};
```

## Graphic Library / Game Library interoperability

This sections describes objects that will be common for both the graphics libraries and the game libraries.

```C++
namespace Arcade {
	class PixelBox {
	public:
		PixelBox(size_t height, size_t width, size_t posW,
			size_t posH);
		size_t getH() const;
		size_t getPosH() const;
		void setH(size_t height);
		void setPosH(size_t posH);

		size_t getW() const;
		size_t getPosW() const;
		void setW(size_t width);
		void setPosW(size_t posW);

		void setColor(Color &color);
		Color &getColor();
		void setSprite(void *sprite);
		void *getSprite();

	private:
		void *_sprite;
		Color _color;
		Vect<size_t> _size
		Vect<size_t> _pos;
	};

	class TextBox {
	public:
		TextBox(std::string const &text, size_t h, size_t w,
			size_t posH, size_t posW);
		std::string getValue() const;
		void setValue(std::string const &text);

		void *getFont() const;
		void setFont(void *font);

		size_t getH() const;
		size_t getPosH() const;
		void setH(size_t heigh);
		void setPosH(size_t posH);

		size_t getW() const;
		size_t getPosW() const;
		void setW(size_t width);
		void setPosW(size_t posW);

	private:
		std::string _value;
		void *_font;
		Vect<size_t> _size;
		Vect<size_t> _pos;
	};
};
```

## Graphics Libraries

This section describes the API that each graphics library should inherit, implement and expose.

```C++
#include <string>

namespace Arcade {
	class IGraphicLib {
	public:
		/* Module info: Used to optimize initialization */
		bool supportSprite() const;
		bool supportSound() const;
		bool needFont() const;

		/* Window handling */
		bool isOpen() const;    // Main loop condition
		bool closeRendering();  // Closes the window => stop loop (go menu)
		bool openRendering();   // Opens the window => start loop
		void clearWindow();     // Clears the screen

		/* Resources handling */
		bool initRenderer(); // Initializes the library
		bool stopRenderer(); // Unloads the library

		/* Rendering functions */
		void drawPixelBox(PixelBox *);  // Draws a PixelBox or the sprite if supported
		void drawText(TextBox *);       // Draws a TextBox

		/* Sound functions */
		void playSound(void *);  // Plays sound passed in arg
		void pauseSound(void *); // Pauses sound passed in arg
		void stopSound(void *);  // Stops sound passed in arg

		/* Loading functions */
		void *loadTextFont(std::string path);   // Returns a text font in the Graphics library format or NULL if not supported
		void *loadSprite(std::string path);     // Returns a sprite in the Graphics library format or NULL if not supported
		void *loadSound(std::string path);      // Returns a sound in the Graphics library format or NULL if not supported

		/* Events handling */
		Keys getLastEvent(); // Gets the last saved event (used in render loop)
		void pollEvent();    // Saves the event in the Graphics library
		void cleanEvent();   // Deletes the last event

		/* Context Info */
		Vect<size_t> getScreenSize() const; // get the X and Y max of the windows
		int getMaxY() const;        // get the Y max of the windows
		int getMaxX() const;        // get the X max of the windows
	};
};
```

## Game Libraries

This section describes the API that each game library should inherit, implement and expose.

```C++
namespace Arcade {
	class IGameModule {
	public:
		/* Resource Handling */
		void loadRessource(IGraphicLib *graphicsLib); // Initializes the Graphics library for this game
		void freeRessource(IGraphicLib *graphicsLib); // Unloads the Graphics library for this game

		/* Rendering functions */
		void update(IGraphicLib *graphicsLib); // Updates the game state according to the player inputs
		void render(IGraphicLib *graphicsLib); // Renders the game state to the screen
	};
};
```
