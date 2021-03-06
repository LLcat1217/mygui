/*!
	@file
	@author     George Evmenov
	@date       08/2009
*/
#ifndef DEMO_KEEPER_H_
#define DEMO_KEEPER_H_

#include "Base/BaseDemoManager.h"

namespace demo
{

	class DemoKeeper :
		public base::BaseDemoManager
	{
	public:
		DemoKeeper();

		void createScene() override;
		void destroyScene() override;

	private:
		void injectKeyPress(MyGUI::KeyCode _key, MyGUI::Char _text) override;
		void setupResources() override;
		void createNewWindow();
		void notifyWindowButtonPressed(MyGUI::Window* _sender, const std::string& _name);

	private:
		typedef std::set<MyGUI::Window*> SetWidget;
		SetWidget mWidgets;
	};

} // namespace demo

#endif // DEMO_KEEPER_H_
