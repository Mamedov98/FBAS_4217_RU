using System.Threading.Tasks;
using System.Collections.ObjectModel;
using Microsoft.EntityFrameworkCore;

using static Ecommerce.Model.EcommerceContext;
using Ecommerce.Model;
using System.ComponentModel;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using System.Windows;
using Ecommerce.View;
using System.Linq;
using System.Windows.Controls;
using System;
using System.Reflection.Metadata;
using GalaSoft.MvvmLight.Messaging;
using Ecommerce.Services.Interfaces;
using Ecommerce.Message;
using System.Windows.Input;

namespace Ecommerce.ViewModel
{

    // ViewModelBase - базовый класс для ViewModel из MvvmLightLibsStd10
    // Зачем нам ViewModelBase ? Для того, чтобы понимать какие классы являются ViewModel мы наследуем его от родителя. 


    class MainViewModel : ViewModelBase
    {
        // интерфейс из MvvmLightLibsStd10. Нужен для отправки и принятия сообщения классу
        private readonly IMessenger _messenger;
        private ViewModelBase _currentViewModel;

        public ViewModelBase CurrentViewModel
        {
            get => _currentViewModel;
            set
            {
                Set(ref _currentViewModel, value); // Функция Set() автоматически вызывает PropertyChanged.
            }
        }

        public void ReceiveMessage(NavigationMessage message)
        {
            CurrentViewModel = App.Container.GetInstance(message.ViewModelType) as ViewModelBase;
        }

        public MainViewModel(IMessenger messenger) // constructor
        {
            CurrentViewModel = App.Container.GetInstance<AdminPanelViewModel>(); // Ставлю окно по умолчанию   

            _messenger = messenger;


            _messenger.Register<NavigationMessage>(this, ReceiveMessage);
        }
    }
}

#region MyRelayCommand

/* class MyRelayCommand : ICommand
 {
     public event EventHandler? CanExecuteChanged;

     private readonly Action _action;
     public MyRelayCommand(Action action)
     {
         _action = action;
     }

     public bool CanExecute(object? parameter)
     {
         return true;
     }

     public void Execute(object? parameter)
     {
         _action();
     }
 }


 class MainViewModel
 {
     public MyRelayCommand LoginCommand
     {
         get => new(() =>
         {
             MessageBox.Show("My relay command");
         });
     }
 }*/
#endregion

   

