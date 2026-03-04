# learning

/domain
│
├─ /model
│   ├─ /led
│   │   ├─ LED.h              # Entity representing a single LED
│   │   ├─ LED.cpp
│   │   ├─ LEDStrip.h         # Aggregate root for a strip of LEDs
│   │   └─ LEDStrip.cpp
│   │
│   └─ /color
│       ├─ RGB.h              # Value object for color
│       ├─ RGB.cpp
│       └─ Brightness.h       # Value object for brightness/scaling
│
├─ /effects
│   ├─ Effect.h               # Domain service interface
│   ├─ FadeEffect.h           # Concrete effect
│   ├─ FadeEffect.cpp
│   ├─ BlinkEffect.h
│   ├─ BlinkEffect.cpp
│   └─ RainbowEffect.h
│
├─ /animation
│   ├─ Animation.h            # Could be a service or aggregate root
│   ├─ Animation.cpp
│   ├─ Step.h                 # Value object or entity for animation steps
│   └─ Step.cpp
│
├─ /scene
│   ├─ Scene.h                # Aggregate root for managing multiple animations/effects
│   ├─ Scene.cpp
│   └─ SceneSettings.h        # Value object for timing, repeat, triggers
│
└─ /services
    ├─ ColorCalculator.h      # Domain service for computing intermediate RGB values, fading, blending
    └─ ColorCalculator.cpp