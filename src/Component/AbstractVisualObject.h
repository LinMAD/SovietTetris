#ifndef SOVIETTETRIS_ABSTRACTVISUALOBJECT_H
#define SOVIETTETRIS_ABSTRACTVISUALOBJECT_H

#include <SDL2/SDL.h>
#include "Setting/Properties.h"

namespace component {
    /**
     * Abstract class represent drawable object
     */
    class AbstractVisualObject {
    public:
        // SDL rect border pixel
        int RECT_BORDER = 1;

        /**
         * Assign object for render
         *
         * @param renderer
         */
        virtual void render(SDL_Renderer *renderer) = 0;

        /**
         * @return int scaling based on screen
         */
        int getObjectScale() {
            return setting::ScreenWidth / 2 / 10;
        }
    };
}

#endif //SOVIETTETRIS_ABSTRACTVISUALOBJECT_H