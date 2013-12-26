/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "GlobalEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GlobalEditor::GlobalEditor ()
{
    addAndMakeVisible (algo = new Slider ("algo"));
    algo->setRange (1, 32, 1);
    algo->setSliderStyle (Slider::Rotary);
    algo->setTextBoxStyle (Slider::TextBoxLeft, true, 80, 20);
    algo->addListener (this);

    addAndMakeVisible (lfoType = new ComboBox ("new combo box"));
    lfoType->setEditableText (false);
    lfoType->setJustificationType (Justification::centredLeft);
    lfoType->setTextWhenNothingSelected (String::empty);
    lfoType->setTextWhenNoChoicesAvailable ("(no choices)");
    lfoType->addItem ("TRIANGLE", 1);
    lfoType->addItem ("SAW DOWN", 2);
    lfoType->addItem ("SAW UP", 3);
    lfoType->addItem ("SQUARE", 4);
    lfoType->addItem ("SINE", 5);
    lfoType->addItem ("S&HOLD", 6);
    lfoType->addListener (this);

    addAndMakeVisible (lfoSpeed = new Slider ("lfoSpeed"));
    lfoSpeed->setRange (0, 99, 1);
    lfoSpeed->setSliderStyle (Slider::LinearVertical);
    lfoSpeed->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfoSpeed->addListener (this);

    addAndMakeVisible (lfoAmDepth = new Slider ("new slider"));
    lfoAmDepth->setRange (0, 99, 1);
    lfoAmDepth->setSliderStyle (Slider::Rotary);
    lfoAmDepth->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfoAmDepth->addListener (this);

    addAndMakeVisible (lfoPitchDepth = new Slider ("new slider"));
    lfoPitchDepth->setRange (0, 99, 1);
    lfoPitchDepth->setSliderStyle (Slider::Rotary);
    lfoPitchDepth->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfoPitchDepth->addListener (this);

    addAndMakeVisible (lfoDelay = new Slider ("lfoDelay"));
    lfoDelay->setRange (0, 99, 1);
    lfoDelay->setSliderStyle (Slider::LinearVertical);
    lfoDelay->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    lfoDelay->addListener (this);

    addAndMakeVisible (cutoff = new Slider ("cutoff"));
    cutoff->setRange (0, 10, 0);
    cutoff->setSliderStyle (Slider::Rotary);
    cutoff->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    cutoff->addListener (this);

    addAndMakeVisible (reso = new Slider ("reso"));
    reso->setRange (0, 10, 0);
    reso->setSliderStyle (Slider::Rotary);
    reso->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    reso->addListener (this);

    addAndMakeVisible (algoDisplay = new AlgoDisplay());
    algoDisplay->setName ("algoDisplay");


    //[UserPreSize]
    //[/UserPreSize]

    setSize (855, 90);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GlobalEditor::~GlobalEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    algo = nullptr;
    lfoType = nullptr;
    lfoSpeed = nullptr;
    lfoAmDepth = nullptr;
    lfoPitchDepth = nullptr;
    lfoDelay = nullptr;
    cutoff = nullptr;
    reso = nullptr;
    algoDisplay = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GlobalEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GlobalEditor::resized()
{
    algo->setBounds (784, 48, 64, 24);
    lfoType->setBounds (768, 8, 80, 16);
    lfoSpeed->setBounds (712, 0, 23, 80);
    lfoAmDepth->setBounds (816, 24, 32, 24);
    lfoPitchDepth->setBounds (792, 24, 32, 24);
    lfoDelay->setBounds (736, 0, 23, 80);
    cutoff->setBounds (176, 40, 48, 48);
    reso->setBounds (232, 40, 48, 48);
    algoDisplay->setBounds (8, 8, 150, 72);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GlobalEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == algo)
    {
        //[UserSliderCode_algo] -- add your slider handling code here..
        //[/UserSliderCode_algo]
    }
    else if (sliderThatWasMoved == lfoSpeed)
    {
        //[UserSliderCode_lfoSpeed] -- add your slider handling code here..
        //[/UserSliderCode_lfoSpeed]
    }
    else if (sliderThatWasMoved == lfoAmDepth)
    {
        //[UserSliderCode_lfoAmDepth] -- add your slider handling code here..
        //[/UserSliderCode_lfoAmDepth]
    }
    else if (sliderThatWasMoved == lfoPitchDepth)
    {
        //[UserSliderCode_lfoPitchDepth] -- add your slider handling code here..
        //[/UserSliderCode_lfoPitchDepth]
    }
    else if (sliderThatWasMoved == lfoDelay)
    {
        //[UserSliderCode_lfoDelay] -- add your slider handling code here..
        //[/UserSliderCode_lfoDelay]
    }
    else if (sliderThatWasMoved == cutoff)
    {
        //[UserSliderCode_cutoff] -- add your slider handling code here..
        //[/UserSliderCode_cutoff]
    }
    else if (sliderThatWasMoved == reso)
    {
        //[UserSliderCode_reso] -- add your slider handling code here..
        //[/UserSliderCode_reso]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void GlobalEditor::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == lfoType)
    {
        //[UserComboBoxCode_lfoType] -- add your combo box handling code here..
        //[/UserComboBoxCode_lfoType]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void GlobalEditor::bind(DexedAudioProcessor *parent) {
	parent->algo->bind(algo);
	parent->lfoRate->bind(lfoSpeed);
	parent->lfoDelay->bind(lfoDelay);
	parent->lfoWaveform->bind(lfoType);
	parent->lfoAmpDepth->bind(lfoAmDepth);
	parent->lfoPitchDepth->bind(lfoPitchDepth);
	processor = parent;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GlobalEditor" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="855" initialHeight="90">
  <BACKGROUND backgroundColour="ffffff"/>
  <SLIDER name="algo" id="8a226ddf9bbff752" memberName="algo" virtualName=""
          explicitFocusOrder="0" pos="784 48 64 24" min="1" max="32" int="1"
          style="Rotary" textBoxPos="TextBoxLeft" textBoxEditable="0" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <COMBOBOX name="new combo box" id="31018596af3b34e9" memberName="lfoType"
            virtualName="" explicitFocusOrder="0" pos="768 8 80 16" editable="0"
            layout="33" items="TRIANGLE&#10;SAW DOWN&#10;SAW UP&#10;SQUARE&#10;SINE&#10;S&amp;HOLD"
            textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="lfoSpeed" id="b10eaf327ab3bff5" memberName="lfoSpeed" virtualName=""
          explicitFocusOrder="0" pos="712 0 23 80" min="0" max="99" int="1"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="3e95a6206fa4a891" memberName="lfoAmDepth"
          virtualName="" explicitFocusOrder="0" pos="816 24 32 24" min="0"
          max="99" int="1" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="new slider" id="6ead769ca786c813" memberName="lfoPitchDepth"
          virtualName="" explicitFocusOrder="0" pos="792 24 32 24" min="0"
          max="99" int="1" style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="lfoDelay" id="1fce68dc81619ef5" memberName="lfoDelay" virtualName=""
          explicitFocusOrder="0" pos="736 0 23 80" min="0" max="99" int="1"
          style="LinearVertical" textBoxPos="NoTextBox" textBoxEditable="1"
          textBoxWidth="80" textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="cutoff" id="40531f16bb0bd225" memberName="cutoff" virtualName=""
          explicitFocusOrder="0" pos="176 40 48 48" min="0" max="10" int="0"
          style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <SLIDER name="reso" id="c8c13464e81a8d83" memberName="reso" virtualName=""
          explicitFocusOrder="0" pos="232 40 48 48" min="0" max="10" int="0"
          style="Rotary" textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1"/>
  <GENERICCOMPONENT name="algoDisplay" id="b26fb9e3b5f0bc37" memberName="algoDisplay"
                    virtualName="" explicitFocusOrder="0" pos="8 8 150 72" class="AlgoDisplay"
                    params=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
