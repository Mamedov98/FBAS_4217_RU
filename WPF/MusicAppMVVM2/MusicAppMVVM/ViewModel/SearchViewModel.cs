using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Printing;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Media.Imaging;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using Microsoft.Win32;
using MusicAppMVVM.Model;
using MusicAppMVVM.Services.Classes;
using MusicAppMVVM.View;



namespace MusicAppMVVM.ViewModel
{
    public class SearchViewModel : ViewModelBase
    {
        public string? Search { get; set; }
        public ObservableCollection<Song>? Songs { get; set; } = new();
        public int SelectedIndex { get; set; }


        public RelayCommand SearchCommand
        {
            get => new(async () =>
            {
                Songs.Clear();

                var data = await DeserializeService.DeserializeAsync<MusicModel>(await ApiService.FindMusic(Search));

                IEnumerable<Song> tmp = data.result.songs;

                foreach (var song in tmp)
                {
                    song.Img = new BitmapImage(new Uri(song.thumbnail));
                    Songs.Add(song);
                }
            });
        }

        public RelayCommand DownloadCommand
        {
            get => new(async () =>
            {
                await FileService.WriteToFileAsync(Songs[SelectedIndex].id, Songs[SelectedIndex].name);
            });
        }
    }
}
