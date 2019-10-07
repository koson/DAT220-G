/******************************************************************************
 *
 * @brief     This file is part of the TouchGFX 4.6.1 evaluation distribution.
 *
 * @author    Draupner Graphics A/S <http://www.touchgfx.com>
 *
 ******************************************************************************
 *
 * @section Copyright
 *
 * This file is free software and is provided for example purposes. You may
 * use, copy, and modify within the terms and conditions of the license
 * agreement.
 *
 * This is licensed software for evaluation use, any use must strictly comply
 * with the evaluation license agreement provided with delivery of the
 * TouchGFX software.
 *
 * The evaluation license agreement can be seen on www.touchgfx.com
 *
 * @section Disclaimer
 *
 * DISCLAIMER OF WARRANTY/LIMITATION OF REMEDIES: Draupner Graphics A/S has
 * no obligation to support this software. Draupner Graphics A/S is providing
 * the software "AS IS", with no express or implied warranties of any kind,
 * including, but not limited to, any implied warranties of merchantability
 * or fitness for any particular purpose or warranties against infringement
 * of any proprietary rights of a third party.
 *
 * Draupner Graphics A/S can not be held liable for any consequential,
 * incidental, or special damages, or any other relief, or for any claim by
 * any third party, arising from your use of this software.
 *
 *****************************************************************************/
#ifndef MAIN_VIEW_HPP
#define MAIN_VIEW_HPP

#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>

#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/RepeatButton.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

/**
 * The View for a template screen. In the MVP paradigm, the view is a
 * passive interface that only displays the user interface and routes
 * any events from the user interface to the presenter. Normally it is the
 * responsibility of the presenter to act upon those events.
 *
 * By deriving from View, this class has a presenter pointer, which is configured
 * automatically.
 */
class MainView : public View<MainPresenter>
{
public:
    /**
     * The view constructor. Note that the constructor runs before the new screen is
     * completely initialized, so do not place code here that causes anything to be drawn.
     * Use the setupScreen function instead.
     */
    MainView()
        : buttonClickedCallback(this, &MainView::buttonClicked)
    {
    }
    virtual ~MainView() { }

    /**
     * This function is called automatically when the view is activated. This function
     * should add widgets to the root container, configure widget sizes and event
     * callbacks, et cetera.
     */

    virtual void setupScreen();
    /**
     * This function is called automatically when transitioning to a different screen
     * than this one. Can optionally be used to clean up.
     */
    virtual void tearDownScreen();

    void buttonClicked(const AbstractButton& source);

    void setCount(uint8_t countValue);

    void setLimitEffects(bool belowUpper, bool aboveLower);

private:
    Image imgBackground;
    Image imgCounter;
    Button btnUp;
    RepeatButton btnDown;
    TextAreaWithOneWildcard countTxt;
    Unicode::UnicodeChar countTxtbuf[3];
    Callback<MainView, const AbstractButton&> buttonClickedCallback;
};

#endif // MAIN_VIEW_HPP

