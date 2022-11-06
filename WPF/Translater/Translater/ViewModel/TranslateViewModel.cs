using GalaSoft.MvvmLight;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using Translater.Model.Lang;
using Translater.Services.Classes;

namespace Translater.ViewModel
{
    public class TranslateViewModel : ViewModelBase
    {
        public LangModel? Lang { get; set; }
        
        public TranslateViewModel()
        {

        }
    }
}
