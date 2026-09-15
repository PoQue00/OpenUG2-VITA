# NFSU2 Godot 4.7 Modular Prototype

## 🚀 Quick Start Guide

This project is a modular port of OpenUG2 (Need For Speed Underground 2) source code to Godot 4.7. It implements the core game systems using native GDScript while preserving the original game's architecture logic.

### Prerequisites

- **Godot Engine 4.6+** (recommended: 4.7)
- Basic familiarity with GDScript

### Setup Steps

1. **Clone/Open the Project**
   ```bash
   # If using Git
   git clone <repository-url>
   cd NFSU2_Godot_Prototype
   
   # Or open directly in Godot
   godot --path ./OpenUG2/
   ```

2. **Configure Project**
   - Open Godot and create a new 3D project
   - Copy `project.godot` to your Godot projects directory
   - Load `res://scenes/main.tscn` as the main scene

3. **Run the Game**
   ```bash
   godot --path ./OpenUG2/
   ```

### Project Structure

```
OpenUG2/
├── res:/                          # Godot 4.7 resources
│   ├── src/                       # GDScript modules
│   │   ├── main/                  # GameManager, Main entry
│   │   ├── renderer/              # Render pipeline
│   │   ├── world/                 # World management
│   │   ├── vehicles/              # Vehicle bank system
│   │   └── ai/                    # OpenWorld AI
│   ├── scenes/                    # Scene files
│   ├── project_settings/          # Project config
│   └── vehicles/textures/         # Texture assets
├── src/                           # OpenUG2 source files (reference)
│   ├── world.c                    # World loading logic
│   ├── vehicles.c                 # Vehicle bank management
│   ├── render.c                   # Render pipeline
│   └── ai.c                       # AI spawning logic
└── README_NFSU2.md               # This file
```

### Key Features Implemented

✅ **Vehicle Bank System** - Switch between Nissan Silvia, Honda Prelude, Mitsubishi Eclipse  
✅ **World Loading** - Region/district management (Central City, Ramparts, Harbour)  
✅ **Render Pipeline** - Texture/mesh caching with OpenUG2 deduplication logic  
✅ **Trim System** - Color mapping for vehicle variants  
✅ **OpenWorld AI** - NPC spawning and traffic management  

### Control Scheme

| Key | Action |
|-----|--------|
| `Enter` | Start/Resume game |
| `Esc` | Pause menu / Debug options |

## 📁 Module Documentation

### GameManager (`src/main/game_manager.gd`)
Manages the entire game state, vehicle switching, and world loading.

### Render System (`src/renderer/render.gd`)
Handles texture caching, mesh batching, and material rendering based on OpenUG2's `src/render.c` logic.

### World Manager (`src/world/world_manager.gd`)
Loads regions and districts with deduplication, port of OpenUG2's `src/world.c`.

### Car Bank (`src/vehicles/car_bank.gd`)
Manages the vehicle bank with switching cooldowns, port of OpenUG2's vehicle bank logic.

### OpenWorld AI (`src/ai/openworld_ai.gd`)
Handles NPC spawning and traffic density control based on OpenUG2's `src/ai.c`.

## 🛠️ Development Notes

This project is a work-in-progress prototype. Future enhancements include:
- Advanced physics (suspension, drift mechanics)
- Collision detection with proper meshes
- HUD system (speedometer, RPM gauge)
- Sound engine integration

## 📄 License

This port is created for educational purposes and preserves the original OpenUG2 source code logic.

## 💬 Support

For questions or issues, please check:
- `res:/README_NFSU2.md` - Detailed documentation
- `src/vehicles/textures/readme.md` - Texture guide