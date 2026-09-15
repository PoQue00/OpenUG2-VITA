#ifndef OPENUG2_CAR_CONFIG_H
#define OPENUG2_CAR_CONFIG_H

enum {
    N2_PART_FRONT, N2_PART_REAR, N2_PART_SKIRT, N2_PART_HOOD,
    N2_PART_HEADLIGHT, N2_PART_TAILLIGHT, N2_PART_ENGINE, N2_PART_AUDIO,
    N2_PART_SPOILER, N2_PART_EXHAUST, N2_PART_SCOOP, N2_PART_COUNT
};

static const char *const n2_part_labels[N2_PART_COUNT] = {
    "Front bumper", "Rear bumper", "Side skirts", "Hood", "Headlights",
    "Taillights", "Engine cover", "Trunk audio", "Spoiler", "Exhaust", "Roof scoop"
};

/* Zero part values follow the kit preset. Local overrides encode KITnn as
 * 1+nn and STYLEnn as 101+nn. Library choices are catalog values >=1000. */
typedef struct {
    int body_kit, hood_style, spoiler_style, wheel_style_id;
    int parts[N2_PART_COUNT];
} N2CarConfig;

typedef struct { int value; char label[48]; } N2PartOption;
typedef struct { int count; N2PartOption options[256]; } N2PartMenu;

#endif
