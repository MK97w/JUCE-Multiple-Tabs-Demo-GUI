/*
  ==============================================================================

    SeasonSelectorTab.h
    Created: 14 Sep 2023 12:33:15am
    Author:  MERT KABUKÇUOĞLU

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

namespace juce
{

    class SeasonSelectorTab : public TabbedComponent
    {
    public:
        SeasonSelectorTab(): TabbedComponent (TabbedButtonBar::TabsAtTop)
        {
            //auto colour = findColour (ResizableWindow::backgroundColourId);
            auto colour = Colours::black;
            
            addTab ("Winter",     colour, new WinterPage(),                                 true);
            addTab ("Spring",     colour, new SpringPage(),                                 true);
            addTab ("Summer",     colour, new SummerPage(),                                 true);
            addTab ("Autumn",     colour, new AutumnPage(),                                 true);
            
            setOutline(0);
            setIndent(500);
        };
    private:
        struct WinterPage: public Component{};
        struct SpringPage: public Component{};
        struct SummerPage: public Component{};
        struct AutumnPage: public Component{};
        
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SeasonSelectorTab);
    };
}



