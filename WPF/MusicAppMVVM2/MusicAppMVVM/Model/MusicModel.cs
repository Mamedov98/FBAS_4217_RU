using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Media.Imaging;

namespace MusicAppMVVM.Model
{

    public class MusicModel
    {
        [DisplayName("Ok")]
        public bool ok { get; set; }

        [DisplayName("Result")]
        public Result? result { get; set; }
    }

    public class Result
    {
        public Song[]? songs { get; set; }
        public Video[]? videos { get; set; }
    }

    public class Song
    {
        public string? id { get; set; }
        public string? name { get; set; }
        public string? title { get; set; }
        public Artist[]? artists { get; set; }
        public Album? album { get; set; }
        public int duration { get; set; }
        public string? thumbnail { get; set; }

        public BitmapImage? Img { get; set; }

        public override string ToString()
        {
            return $"{title} {name}";
        }
    }

    public class Album
    {
        public string? album_id { get; set; }
        public string? name { get; set; }
    }

    public class Artist
    {
        public string? artist_id { get; set; }
        public string? name { get; set; }
    }

    public class Video
    {
        public string? id { get; set; }
        public string? title { get; set; }
        public int duration { get; set; }
    }
}
