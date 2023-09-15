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
            auto colour = Colours::transparentBlack;
            
            addTab ("Winter",     colour, new WinterPage(),                     true);
            addTab ("Spring",     colour, new SpringPage(),                                 true);
            addTab ("Summer",     colour, new SummerPage(),                                 true);
            addTab ("Autumn",     colour, new AutumnPage(),                                 true);
            
            setOutline(0);
            setTabBarDepth(50);
            setSize(1280, 800);
            //setBounds(0, 0, 1280, 800);
            //setIndent(110);
            //setBounds(getLocalBounds());
            //setLookAndFeel(LookAndFeel *newLookAndFeel)
        };
    private:

        struct WinterPage: public Component
        {
            WinterPage() = default;
            void paint(Graphics& g) override
            {
                g.drawImage(ImageCache::getFromMemory(BinaryData::winter_jpg, BinaryData::winter_jpgSize),getLocalBounds().toFloat());
            }
        };
        
        struct SpringPage: public Component
        {
            SpringPage() = default;
            void paint(Graphics& g) override
            {
                g.drawImage(ImageCache::getFromMemory(BinaryData::spring_jpg, BinaryData::spring_jpgSize),getLocalBounds().toFloat());
            }
        };
        
        struct SummerPage: public Component
        {
            SummerPage() = default;
            void paint(Graphics& g) override
            {
                g.drawImage(ImageCache::getFromMemory(BinaryData::summer_jpg, BinaryData::summer_jpgSize),getLocalBounds().toFloat());
            }
        };
        struct AutumnPage: public Component
        {
            AutumnPage() = default;
            void paint(Graphics& g) override
            {
                g.drawImage(ImageCache::getFromMemory(BinaryData::autumn_jpg, BinaryData::autumn_jpgSize),getLocalBounds().toFloat());
            }
        };
        
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SeasonSelectorTab);
    };
}



